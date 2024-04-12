void fun()
{
  int entity_6 = 10;
  int entity_0 = 53;
  int entity_2 = 44;
  char* entity_1;
  char entity_8[56] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_8, 'O', 56-1);
  entity_8[56-1]='';
  memcpy(entity_1, entity_8, 56*sizeof(char));
}