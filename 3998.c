void fun()
{
  int entity_5 = 32;
  int entity_1 = 66;
  char entity_7 = 'm';
  char* entity_3;
  char entity_0 = 'C';
  char entity_4[21] = "";
  entity_4 = NULL;
  memset(entity_4, 't', 21-1);
  entity_4[21-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  entity_5 = 61;
  memcpy(entity_3, entity_4, 21*sizeof(char));
}