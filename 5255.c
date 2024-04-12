void fun()
{
  int entity_3 = 43;
  char entity_1[54] = "";
  entity_1 = NULL;
  char entity_8 = 'd';
  char* entity_5;
  char entity_6[85] = "";
  entity_6 = NULL;
  memset(entity_1, 'H', 54-1);
  entity_1[54-1]='';
  memset(entity_6, 'r', 85-1);
  entity_6[85-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memcpy(entity_5, entity_6, 85*sizeof(char));
}