void fun()
{
  int entity_2 = 9;
  char entity_8[48] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', entity_2-1);
  entity_7[entity_2-1]='';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  memset(entity_8, 'R', 48-1);
  entity_8[48-1]='';
  entity_2 = 40;
  entity_7[75] = 'Z';
}