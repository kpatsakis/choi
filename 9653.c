void fun()
{
  int entity_6 = 25;
  char* entity_1;
  char entity_4[96] = "";
  entity_4 = NULL;
  memset(entity_4, 'W', 96-1);
  entity_4[96-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memcpy(entity_1, entity_4, 96*sizeof(char));
}