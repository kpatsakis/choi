void fun()
{
  int entity_1 = 16;
  char entity_6[23] = "";
  entity_6 = NULL;
  char entity_0 = 'g';
  char* entity_5;
  char* entity_3;
  memset(entity_6, 'X', 23-1);
  entity_6[23-1]='';
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[93-1]='';
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[39-1]='';
  entity_6[entity_1] = 'w';
}