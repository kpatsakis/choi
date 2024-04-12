void fun()
{
  int entity_8 = 77;
  char* entity_6;
  char* entity_5;
  char entity_7[94] = "";
  entity_7 = NULL;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 82-1);
  entity_2[82-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memset(entity_7, 'S', 94-1);
  entity_7[94-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  entity_8 = 10;
  strcpy(entity_5, entity_7);
}