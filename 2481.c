void fun()
{
  int entity_2 = 28;
  char entity_7[62] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_6;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  memset(entity_7, 'T', 62-1);
  entity_7[62-1]='';
  memset(entity_4, 'Q', entity_2-1);
  entity_4[entity_2-1]='';
  entity_6 = (char*)malloc(82*sizeof(char));
  entity_6[82-1]='';
  strcpy(entity_6, entity_4);
}