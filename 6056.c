void fun()
{
  int entity_1 = 25;
  char* entity_2;
  char entity_6[21] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_6, 'I', 21-1);
  entity_6[21-1]='';
  entity_1 = 91;
  memcpy(entity_2, entity_6, 21*sizeof(char));
}