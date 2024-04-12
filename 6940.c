void fun()
{
  int entity_8 = 74;
  int entity_2 = 75;
  char entity_4[86] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_1;
  memset(entity_4, 'o', 86-1);
  entity_4[86-1]='';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memcpy(entity_1, entity_4, 86*sizeof(char));
}