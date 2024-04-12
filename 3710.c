void fun()
{
  int entity_8 = 7;
  char* entity_0;
  char entity_5[82] = "";
  entity_5 = NULL;
  char entity_6 = 'A';
  memset(entity_5, 'q', 82-1);
  entity_5[82-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memcpy(entity_0, entity_5, 82*sizeof(char));
}