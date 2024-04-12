void fun()
{
  int entity_7 = 33;
  int entity_0 = 81;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'd', 24-1);
  entity_1[24-1]='';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  entity_1[entity_0] = 'd';
}