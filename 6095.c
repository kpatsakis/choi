void fun()
{
  int entity_9 = 56;
  int entity_8 = 58;
  entity_9 = 64;
  char* entity_3;
  char entity_6 = 'k';
  char entity_0[80] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_0, 's', 80-1);
  entity_0[80-1]='';
  memcpy(entity_3, entity_0, 80*sizeof(char));
}