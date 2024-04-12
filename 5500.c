void fun()
{
  int entity_1 = 47;
  char entity_6[34] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_2[85] = "";
  entity_2 = NULL;
  char entity_5 = 'y';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_2, 'u', 85-1);
  entity_2[85-1]='';
  memset(entity_6, 'q', 34-1);
  entity_6[34-1]='';
  memcpy(entity_7, entity_6, 34*sizeof(char));
}