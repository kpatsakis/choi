void fun()
{
  int entity_0 = 85;
  entity_0 = 25;
  char entity_2[11] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'o', 11-1);
  entity_2[11-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memcpy(entity_3, entity_2, 11*sizeof(char));
}