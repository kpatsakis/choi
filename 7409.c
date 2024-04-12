void fun()
{
  int entity_5 = 82;
  char* entity_8;
  char entity_2 = 'C';
  char entity_7[72] = "";
  entity_7 = NULL;
  char entity_9[11] = "";
  entity_9 = NULL;
  memset(entity_9, 'q', 11-1);
  entity_9[11-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  memset(entity_7, 'r', 72-1);
  entity_7[72-1]='';
  entity_9[entity_5] = 'l';
}