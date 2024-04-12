void fun()
{
  int entity_7 = 3;
  char entity_9[65] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_6;
  memset(entity_9, 'b', 65-1);
  entity_9[65-1]='';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  entity_7 = 45;
  entity_9[entity_7] = 'R';
}