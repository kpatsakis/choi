void fun()
{
  int entity_6 = 19;
  int entity_8 = 42;
  char* entity_0;
  char entity_7[82] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_7, 'H', 82-1);
  entity_7[82-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 27;
  memcpy(entity_2, entity_7, 82*sizeof(char));
}