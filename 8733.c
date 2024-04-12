void fun()
{
  int entity_7 = 99;
  int entity_5 = 60;
  char entity_1 = 'e';
  char* entity_6;
  char* entity_2;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_0, 'L', entity_5-1);
  entity_0[entity_5-1]='';
  entity_5 = 3;
  strcpy(entity_2, entity_0);
}