void fun()
{
  int entity_7 = 21;
  char* entity_8;
  char entity_2[56] = "";
  entity_2 = NULL;
  char entity_5[69] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_6 = (char*)malloc(55*sizeof(char));
  entity_6[55-1]='';
  memset(entity_2, 'r', 56-1);
  entity_2[56-1]='';
  memset(entity_5, 'Y', 69-1);
  entity_5[69-1]='';
  entity_7 = 98;
  strcpy(entity_8, entity_2);
}