void fun()
{
  int entity_3 = 15;
  entity_3 = 22;
  char entity_6 = 'T';
  char* entity_7;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  memset(entity_1, 'R', entity_3-1);
  entity_1[entity_3-1]='';
  memcpy(entity_7, entity_1, entity_3*sizeof(char));
}