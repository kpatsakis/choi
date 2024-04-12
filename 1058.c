void fun()
{
  int entity_2 = 15;
  char* entity_7;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  memset(entity_9, 'o', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[32] = 'u';
}