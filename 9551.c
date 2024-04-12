void fun()
{
  int entity_1 = 12;
  char entity_7[86] = "";
  entity_7 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_6;
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  memset(entity_0, 'D', entity_1-1);
  entity_0[entity_1-1]='';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  memset(entity_7, 'E', 86-1);
  entity_7[86-1]='';
  entity_1 = 48;
  memcpy(entity_6, entity_0, entity_1*sizeof(char));
}