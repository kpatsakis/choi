void fun()
{
  int entity_0 = 9;
  char entity_7[16] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_7, 'W', 16-1);
  entity_7[16-1]='';
  memcpy(entity_3, entity_7, 16*sizeof(char));
}