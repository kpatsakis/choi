void fun()
{
  int entity_4 = 9;
  int entity_9 = 55;
  entity_4 = 38;
  char* entity_3;
  char entity_1[95] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_1, 'p', 95-1);
  entity_1[95-1]='';
  entity_1[entity_4] = 'h';
}