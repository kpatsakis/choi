void fun()
{
  int entity_8 = 39;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'i', 96-1);
  entity_7[96-1]='';
  memcpy(entity_3, entity_7, 96*sizeof(char));
}