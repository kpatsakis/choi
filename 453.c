void fun()
{
  int entity_2 = 82;
  char entity_0[85] = "";
  entity_0 = NULL;
  char entity_3 = 'L';
  char* entity_6;
  memset(entity_0, 'o', 85-1);
  entity_0[85-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memcpy(entity_6, entity_0, 85*sizeof(char));
}