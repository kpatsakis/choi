void fun()
{
  int entity_8 = 39;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_3[25] = "";
  entity_3 = NULL;
  char entity_6 = 'X';
  char* entity_9;
  memset(entity_3, 'b', 25-1);
  entity_3[25-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[62-1]='';
  memset(entity_2, 'c', entity_8-1);
  entity_2[entity_8-1]='';
  strcpy(entity_9, entity_2);
}