void fun()
{
  int entity_0 = 66;
  entity_0 = 67;
  char* entity_2;
  char entity_7[22] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_7, 'e', 22-1);
  entity_7[22-1]='';
  memcpy(entity_2, entity_7, 22*sizeof(char));
}