void fun()
{
  int entity_9 = 75;
  char* entity_8;
  char entity_3[59] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_3, 'c', 59-1);
  entity_3[59-1]='';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  strcpy(entity_8, entity_3);
}