void fun()
{
  int entity_4 = 51;
  entity_4 = 24;
  char* entity_3;
  char entity_9[73] = "";
  entity_9 = NULL;
  char entity_7 = 'E';
  char* entity_5;
  memset(entity_9, 'F', 73-1);
  entity_9[73-1]='';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  entity_9[entity_4] = 'A';
}