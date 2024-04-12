void fun()
{
  int entity_0 = 89;
  char entity_7[59] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'W', 59-1);
  entity_7[59-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_7, 59*sizeof(char));
}