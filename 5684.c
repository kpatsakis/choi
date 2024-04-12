void fun()
{
  int entity_2 = 61;
  int entity_3 = 35;
  char entity_8[82] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'Y', 82-1);
  entity_8[82-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 99;
  memcpy(entity_1, entity_8, 82*sizeof(char));
}