void fun()
{
  int entity_4 = 6;
  int entity_7 = 70;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_1, 'T', 74-1);
  entity_1[74-1]='';
  memcpy(entity_2, entity_1, 74*sizeof(char));
}