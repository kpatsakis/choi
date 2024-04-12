void fun()
{
  int entity_3 = 83;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_7;
  char* entity_8;
  char* entity_2;
  memset(entity_9, 'Y', entity_3-1);
  entity_9[entity_3-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[18-1]='';
  entity_3 = 22;
  strcpy(entity_2, entity_9);
}