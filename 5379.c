void fun()
{
  int entity_6 = 18;
  char* entity_1;
  char entity_0[82] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', 82-1);
  entity_0[82-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memcpy(entity_1, entity_0, 82*sizeof(char));
}