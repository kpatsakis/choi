void fun()
{
  int entity_3 = 60;
  char entity_1[70] = "";
  char* entity_5;
  memset(entity_1, 'r', 70-1);
  entity_1[70-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_1, 70*sizeof(char));
}