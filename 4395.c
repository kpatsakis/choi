void fun()
{
  int entity_2 = 46;
  int entity_1 = 73;
  char entity_7[35] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_6[34] = "";
  entity_6 = NULL;
  memset(entity_7, 'b', 35-1);
  entity_7[35-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  memset(entity_6, 'G', 34-1);
  entity_6[34-1]='';
  memcpy(entity_4, entity_7, 35*sizeof(char));
}