void fun()
{
  int entity_5 = 97;
  char entity_2[74] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_7;
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  entity_7 = (char*)malloc(93*sizeof(char));
  entity_7[93-1]='';
  memset(entity_2, 'A', 74-1);
  entity_2[74-1]='';
  entity_5 = 59;
  entity_2[entity_5] = 'R';
}