void fun()
{
  int entity_1 = 82;
  int entity_0 = 85;
  char* entity_2;
  char entity_8 = 'S';
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(11*sizeof(char));
  entity_2[11-1]='';
  memset(entity_7, 'm', entity_1-1);
  entity_7[entity_1-1]='';
  memcpy(entity_2, entity_7, entity_1*sizeof(char));
}