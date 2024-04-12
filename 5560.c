void fun()
{
  int entity_9 = 48;
  char* entity_6;
  char entity_1 = 'f';
  char* entity_7;
  char entity_5[41] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  entity_7 = (char*)malloc(7*sizeof(char));
  entity_7[7-1]='';
  memset(entity_5, 'h', 41-1);
  entity_5[41-1]='';
  entity_5[entity_9] = 'a';
}