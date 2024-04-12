void fun()
{
  int entity_9 = 19;
  int entity_0 = 92;
  char* entity_2;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'r', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  entity_9 = 32;
  strcpy(entity_2, entity_5);
}