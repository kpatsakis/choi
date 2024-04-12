void fun()
{
  int entity_8 = 85;
  char entity_6[79] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'T', 79-1);
  entity_6[79-1]='';
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  entity_6[entity_8] = 'o';
}