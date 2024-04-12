void fun()
{
  int entity_3 = 44;
  char* entity_2;
  char entity_6[70] = "";
  char entity_9 = 'i';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'P', 70-1);
  entity_6[70-1]='0';
  memcpy(entity_2, entity_6, 70*sizeof(char));
}