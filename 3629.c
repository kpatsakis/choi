void fun()
{
  int entity_8 = 89;
  char* entity_7;
  char entity_3[31] = "";
  entity_3 = NULL;
  memset(entity_3, 'z', 31-1);
  entity_3[31-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_3, 31*sizeof(char));
}