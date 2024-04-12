void fun()
{
  int entity_2 = 84;
  entity_2 = 23;
  char* entity_8;
  char entity_9[15] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'O', 15-1);
  entity_9[15-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  strcpy(entity_7, entity_9);
}