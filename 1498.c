void fun()
{
  int entity_9 = 17;
  char* entity_2;
  char* entity_7;
  char entity_3 = 'Z';
  char entity_8[83] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_8, 'M', 83-1);
  entity_8[83-1]='';
  strcpy(entity_2, entity_8);
}