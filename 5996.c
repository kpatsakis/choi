void fun()
{
  int entity_0 = 20;
  char entity_7[18] = "";
  entity_7 = NULL;
  char entity_3 = 'd';
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_7, 's', 18-1);
  entity_7[18-1]='';
  memcpy(entity_1, entity_7, 18*sizeof(char));
}