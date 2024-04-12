void fun()
{
  int entity_5 = 70;
  char* entity_2;
  char entity_1[82] = "";
  entity_1 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_1, 'h', 82-1);
  entity_1[82-1]='';
  entity_5 = 79;
  memcpy(entity_2, entity_1, 82*sizeof(char));
}