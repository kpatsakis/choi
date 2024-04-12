void fun()
{
  int entity_5 = 6;
  char* entity_7;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 't', 76-1);
  entity_4[76-1]='';
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memcpy(entity_7, entity_4, 76*sizeof(char));
}