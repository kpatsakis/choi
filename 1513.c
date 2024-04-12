void fun()
{
  int entity_7 = 5;
  int entity_9 = 85;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memset(entity_1, 'S', entity_9-1);
  entity_1[entity_9-1]='';
  entity_9 = 51;
  entity_1[54] = 'F';
}