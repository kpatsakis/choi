void fun()
{
  int entity_5 = 14;
  int entity_0 = 70;
  char* entity_2;
  char entity_8 = 'F';
  char entity_9 = 'y';
  char entity_4[26] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 26-1);
  entity_4[26-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  entity_0 = 76;
  memcpy(entity_2, entity_4, 26*sizeof(char));
}