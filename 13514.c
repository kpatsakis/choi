void fun()
{
  int entity_0 = 59;
  entity_0 = 2;
  char entity_3[84] = "";
  char* entity_2;
  char entity_1[entity_0] = "";
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'O', 84-1);
  entity_3[84-1]='0';
  memset(entity_1, 'r', entity_0-1);
  entity_1[entity_0-1]='0';
  memcpy(entity_2, entity_1, entity_0*sizeof(char));
}