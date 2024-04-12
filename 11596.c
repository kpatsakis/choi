void fun()
{
  char* entity_7;
  char entity_8[68] = "";
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[0]='0';
  memset(entity_8, 'V', 68-1);
  entity_8[68-1]='0';
  memcpy(entity_7, entity_8, 68*sizeof(char));
}