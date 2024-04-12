void fun()
{
  int entity_3 = 67;
  int entity_0 = 13;
  int entity_6 = 5;
  entity_6 = 26;
  char entity_8 = 'B';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'Y', entity_6-1);
  entity_4[entity_6-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}